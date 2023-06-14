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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEBASICRESTARTINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEBASICRESTARTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ComponentBasicRestartInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 操作的服务范围
                */
                class ServiceBasicRestartInfo : public AbstractModel
                {
                public:
                    ServiceBasicRestartInfo();
                    ~ServiceBasicRestartInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务名，必填，如HDFS
                     * @return ServiceName 服务名，必填，如HDFS
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名，必填，如HDFS
                     * @param _serviceName 服务名，必填，如HDFS
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取如果没传，则表示所有进程
                     * @return ComponentInfoList 如果没传，则表示所有进程
                     * 
                     */
                    std::vector<ComponentBasicRestartInfo> GetComponentInfoList() const;

                    /**
                     * 设置如果没传，则表示所有进程
                     * @param _componentInfoList 如果没传，则表示所有进程
                     * 
                     */
                    void SetComponentInfoList(const std::vector<ComponentBasicRestartInfo>& _componentInfoList);

                    /**
                     * 判断参数 ComponentInfoList 是否已赋值
                     * @return ComponentInfoList 是否已赋值
                     * 
                     */
                    bool ComponentInfoListHasBeenSet() const;

                private:

                    /**
                     * 服务名，必填，如HDFS
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 如果没传，则表示所有进程
                     */
                    std::vector<ComponentBasicRestartInfo> m_componentInfoList;
                    bool m_componentInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEBASICRESTARTINFO_H_
