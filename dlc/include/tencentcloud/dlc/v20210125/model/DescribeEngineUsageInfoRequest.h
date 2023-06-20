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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINEUSAGEINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINEUSAGEINFOREQUEST_H_

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
                * DescribeEngineUsageInfo请求参数结构体
                */
                class DescribeEngineUsageInfoRequest : public AbstractModel
                {
                public:
                    DescribeEngineUsageInfoRequest();
                    ~DescribeEngineUsageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据引擎ID
                     * @return DataEngineId 数据引擎ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置数据引擎ID
                     * @param _dataEngineId 数据引擎ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                private:

                    /**
                     * 数据引擎ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINEUSAGEINFOREQUEST_H_
