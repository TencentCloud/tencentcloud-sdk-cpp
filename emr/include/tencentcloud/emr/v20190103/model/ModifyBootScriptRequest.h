/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYBOOTSCRIPTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYBOOTSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyBootScript请求参数结构体
                */
                class ModifyBootScriptRequest : public AbstractModel
                {
                public:
                    ModifyBootScriptRequest();
                    ~ModifyBootScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR实例Id
                     * @return InstanceId EMR实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR实例Id
                     * @param _instanceId EMR实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取引导脚本类型,resourceAfter,clusterAfter,clusterBefore
                     * @return BootType 引导脚本类型,resourceAfter,clusterAfter,clusterBefore
                     * 
                     */
                    std::string GetBootType() const;

                    /**
                     * 设置引导脚本类型,resourceAfter,clusterAfter,clusterBefore
                     * @param _bootType 引导脚本类型,resourceAfter,clusterAfter,clusterBefore
                     * 
                     */
                    void SetBootType(const std::string& _bootType);

                    /**
                     * 判断参数 BootType 是否已赋值
                     * @return BootType 是否已赋值
                     * 
                     */
                    bool BootTypeHasBeenSet() const;

                    /**
                     * 获取引导脚本的具体变更，如为空表示WhenRun时机无引导脚本
                     * @return PreExecutedFileSettings 引导脚本的具体变更，如为空表示WhenRun时机无引导脚本
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetPreExecutedFileSettings() const;

                    /**
                     * 设置引导脚本的具体变更，如为空表示WhenRun时机无引导脚本
                     * @param _preExecutedFileSettings 引导脚本的具体变更，如为空表示WhenRun时机无引导脚本
                     * 
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSetting>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     * 
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                private:

                    /**
                     * EMR实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 引导脚本类型,resourceAfter,clusterAfter,clusterBefore
                     */
                    std::string m_bootType;
                    bool m_bootTypeHasBeenSet;

                    /**
                     * 引导脚本的具体变更，如为空表示WhenRun时机无引导脚本
                     */
                    std::vector<PreExecuteFileSetting> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYBOOTSCRIPTREQUEST_H_
