/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHEOPTRESULT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHEOPTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 违规资源封禁/解封返回类型
                */
                class CacheOptResult : public AbstractModel
                {
                public:
                    CacheOptResult();
                    ~CacheOptResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成功的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessUrls 成功的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSuccessUrls() const;

                    /**
                     * 设置成功的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successUrls 成功的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessUrls(const std::vector<std::string>& _successUrls);

                    /**
                     * 判断参数 SuccessUrls 是否已赋值
                     * @return SuccessUrls 是否已赋值
                     * 
                     */
                    bool SuccessUrlsHasBeenSet() const;

                    /**
                     * 获取失败的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailUrls 失败的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailUrls() const;

                    /**
                     * 设置失败的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failUrls 失败的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailUrls(const std::vector<std::string>& _failUrls);

                    /**
                     * 判断参数 FailUrls 是否已赋值
                     * @return FailUrls 是否已赋值
                     * 
                     */
                    bool FailUrlsHasBeenSet() const;

                private:

                    /**
                     * 成功的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_successUrls;
                    bool m_successUrlsHasBeenSet;

                    /**
                     * 失败的url列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failUrls;
                    bool m_failUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHEOPTRESULT_H_
