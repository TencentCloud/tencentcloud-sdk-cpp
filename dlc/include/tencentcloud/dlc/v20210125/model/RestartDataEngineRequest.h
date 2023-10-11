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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * RestartDataEngine请求参数结构体
                */
                class RestartDataEngineRequest : public AbstractModel
                {
                public:
                    RestartDataEngineRequest();
                    ~RestartDataEngineRequest() = default;
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
                     * 获取是否强制重启，忽略任务
                     * @return ForcedOperation 是否强制重启，忽略任务
                     * 
                     */
                    bool GetForcedOperation() const;

                    /**
                     * 设置是否强制重启，忽略任务
                     * @param _forcedOperation 是否强制重启，忽略任务
                     * 
                     */
                    void SetForcedOperation(const bool& _forcedOperation);

                    /**
                     * 判断参数 ForcedOperation 是否已赋值
                     * @return ForcedOperation 是否已赋值
                     * 
                     */
                    bool ForcedOperationHasBeenSet() const;

                private:

                    /**
                     * 引擎ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 是否强制重启，忽略任务
                     */
                    bool m_forcedOperation;
                    bool m_forcedOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDATAENGINEREQUEST_H_
