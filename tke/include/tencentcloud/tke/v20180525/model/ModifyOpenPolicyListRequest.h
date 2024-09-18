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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYOPENPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYOPENPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/OpenPolicySwitch.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyOpenPolicyList请求参数结构体
                */
                class ModifyOpenPolicyListRequest : public AbstractModel
                {
                public:
                    ModifyOpenPolicyListRequest();
                    ~ModifyOpenPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取修改的策略列表，目前仅支持修改EnforcementAction字段
                     * @return OpenPolicyInfoList 修改的策略列表，目前仅支持修改EnforcementAction字段
                     * 
                     */
                    std::vector<OpenPolicySwitch> GetOpenPolicyInfoList() const;

                    /**
                     * 设置修改的策略列表，目前仅支持修改EnforcementAction字段
                     * @param _openPolicyInfoList 修改的策略列表，目前仅支持修改EnforcementAction字段
                     * 
                     */
                    void SetOpenPolicyInfoList(const std::vector<OpenPolicySwitch>& _openPolicyInfoList);

                    /**
                     * 判断参数 OpenPolicyInfoList 是否已赋值
                     * @return OpenPolicyInfoList 是否已赋值
                     * 
                     */
                    bool OpenPolicyInfoListHasBeenSet() const;

                    /**
                     * 获取策略分类 基线：baseline 优选：priority 可选：optional
                     * @return Category 策略分类 基线：baseline 优选：priority 可选：optional
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置策略分类 基线：baseline 优选：priority 可选：optional
                     * @param _category 策略分类 基线：baseline 优选：priority 可选：optional
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 修改的策略列表，目前仅支持修改EnforcementAction字段
                     */
                    std::vector<OpenPolicySwitch> m_openPolicyInfoList;
                    bool m_openPolicyInfoListHasBeenSet;

                    /**
                     * 策略分类 基线：baseline 优选：priority 可选：optional
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYOPENPOLICYLISTREQUEST_H_
