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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGINSTANCEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 引擎配置信息
                */
                class DataEngineConfigInstanceInfo : public AbstractModel
                {
                public:
                    DataEngineConfigInstanceInfo();
                    ~DataEngineConfigInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取用户自定义配置项集合
                     * @return DataEngineConfigPairs 用户自定义配置项集合
                     * 
                     */
                    std::vector<DataEngineConfigPair> GetDataEngineConfigPairs() const;

                    /**
                     * 设置用户自定义配置项集合
                     * @param _dataEngineConfigPairs 用户自定义配置项集合
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
                     * 获取作业集群资源参数配置模板
                     * @return SessionResourceTemplate 作业集群资源参数配置模板
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置作业集群资源参数配置模板
                     * @param _sessionResourceTemplate 作业集群资源参数配置模板
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
                     * 用户自定义配置项集合
                     */
                    std::vector<DataEngineConfigPair> m_dataEngineConfigPairs;
                    bool m_dataEngineConfigPairsHasBeenSet;

                    /**
                     * 作业集群资源参数配置模板
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGINSTANCEINFO_H_
