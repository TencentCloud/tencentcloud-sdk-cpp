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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDCOUNTDESC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDCOUNTDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 多云账户统计信息
                */
                class CloudCountDesc : public AbstractModel
                {
                public:
                    CloudCountDesc();
                    ~CloudCountDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0表示腾讯云
1表示AWS
                     * @return CloudType 0表示腾讯云
1表示AWS
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置0表示腾讯云
1表示AWS
                     * @param _cloudType 0表示腾讯云
1表示AWS
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取账户数量
                     * @return CloudCount 账户数量
                     * 
                     */
                    int64_t GetCloudCount() const;

                    /**
                     * 设置账户数量
                     * @param _cloudCount 账户数量
                     * 
                     */
                    void SetCloudCount(const int64_t& _cloudCount);

                    /**
                     * 判断参数 CloudCount 是否已赋值
                     * @return CloudCount 是否已赋值
                     * 
                     */
                    bool CloudCountHasBeenSet() const;

                    /**
                     * 获取该云账号类型描述
                     * @return CloudDesc 该云账号类型描述
                     * 
                     */
                    std::string GetCloudDesc() const;

                    /**
                     * 设置该云账号类型描述
                     * @param _cloudDesc 该云账号类型描述
                     * 
                     */
                    void SetCloudDesc(const std::string& _cloudDesc);

                    /**
                     * 判断参数 CloudDesc 是否已赋值
                     * @return CloudDesc 是否已赋值
                     * 
                     */
                    bool CloudDescHasBeenSet() const;

                private:

                    /**
                     * 0表示腾讯云
1表示AWS
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 账户数量
                     */
                    int64_t m_cloudCount;
                    bool m_cloudCountHasBeenSet;

                    /**
                     * 该云账号类型描述
                     */
                    std::string m_cloudDesc;
                    bool m_cloudDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDCOUNTDESC_H_
