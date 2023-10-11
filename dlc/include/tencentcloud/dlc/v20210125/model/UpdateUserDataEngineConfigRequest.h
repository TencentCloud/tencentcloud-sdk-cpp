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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEUSERDATAENGINECONFIGREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEUSERDATAENGINECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineConfigPair.h>
#include <tencentcloud/dlc/v20210125/model/SessionResourceTemplate.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateUserDataEngineConfig请求参数结构体
                */
                class UpdateUserDataEngineConfigRequest : public AbstractModel
                {
                public:
                    UpdateUserDataEngineConfigRequest();
                    ~UpdateUserDataEngineConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎ID
                     * @return DataEngineId 引擎ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎ID
                     * @param _dataEngineId 引擎ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取引擎配置项
                     * @return DataEngineConfigPairs 引擎配置项
                     * 
                     */
                    std::vector<DataEngineConfigPair> GetDataEngineConfigPairs() const;

                    /**
                     * 设置引擎配置项
                     * @param _dataEngineConfigPairs 引擎配置项
                     * 
                     */
                    void SetDataEngineConfigPairs(const std::vector<DataEngineConfigPair>& _dataEngineConfigPairs);

                    /**
                     * 判断参数 DataEngineConfigPairs 是否已赋值
                     * @return DataEngineConfigPairs 是否已赋值
                     * 
                     */
                    bool DataEngineConfigPairsHasBeenSet() const;

                    /**
                     * 获取作业引擎资源配置模版
                     * @return SessionResourceTemplate 作业引擎资源配置模版
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置作业引擎资源配置模版
                     * @param _sessionResourceTemplate 作业引擎资源配置模版
                     * 
                     */
                    void SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate);

                    /**
                     * 判断参数 SessionResourceTemplate 是否已赋值
                     * @return SessionResourceTemplate 是否已赋值
                     * 
                     */
                    bool SessionResourceTemplateHasBeenSet() const;

                private:

                    /**
                     * 引擎ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 引擎配置项
                     */
                    std::vector<DataEngineConfigPair> m_dataEngineConfigPairs;
                    bool m_dataEngineConfigPairsHasBeenSet;

                    /**
                     * 作业引擎资源配置模版
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEUSERDATAENGINECONFIGREQUEST_H_
