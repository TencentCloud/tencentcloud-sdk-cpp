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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * 独享版集群
                */
                class ExclusiveHSM : public AbstractModel
                {
                public:
                    ExclusiveHSM();
                    ~ExclusiveHSM() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取独享集群Id
                     * @return HsmClusterId 独享集群Id
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置独享集群Id
                     * @param _hsmClusterId 独享集群Id
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取独享集群名称
                     * @return HsmClusterName 独享集群名称
                     * 
                     */
                    std::string GetHsmClusterName() const;

                    /**
                     * 设置独享集群名称
                     * @param _hsmClusterName 独享集群名称
                     * 
                     */
                    void SetHsmClusterName(const std::string& _hsmClusterName);

                    /**
                     * 判断参数 HsmClusterName 是否已赋值
                     * @return HsmClusterName 是否已赋值
                     * 
                     */
                    bool HsmClusterNameHasBeenSet() const;

                private:

                    /**
                     * 独享集群Id
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * 独享集群名称
                     */
                    std::string m_hsmClusterName;
                    bool m_hsmClusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_
