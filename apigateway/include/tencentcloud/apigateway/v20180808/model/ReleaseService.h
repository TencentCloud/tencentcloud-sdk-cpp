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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RELEASESERVICE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RELEASESERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 发布服务返回
                */
                class ReleaseService : public AbstractModel
                {
                public:
                    ReleaseService();
                    ~ReleaseService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布时的备注信息填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseDesc 发布时的备注信息填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseDesc() const;

                    /**
                     * 设置发布时的备注信息填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseDesc 发布时的备注信息填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseDesc(const std::string& _releaseDesc);

                    /**
                     * 判断参数 ReleaseDesc 是否已赋值
                     * @return ReleaseDesc 是否已赋值
                     * 
                     */
                    bool ReleaseDescHasBeenSet() const;

                    /**
                     * 获取发布的版本id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseVersion 发布的版本id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseVersion() const;

                    /**
                     * 设置发布的版本id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseVersion 发布的版本id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseVersion(const std::string& _releaseVersion);

                    /**
                     * 判断参数 ReleaseVersion 是否已赋值
                     * @return ReleaseVersion 是否已赋值
                     * 
                     */
                    bool ReleaseVersionHasBeenSet() const;

                private:

                    /**
                     * 发布时的备注信息填写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseDesc;
                    bool m_releaseDescHasBeenSet;

                    /**
                     * 发布的版本id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseVersion;
                    bool m_releaseVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RELEASESERVICE_H_
