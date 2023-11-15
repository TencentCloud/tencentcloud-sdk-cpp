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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineBasicInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUpdatableDataEngines返回参数结构体
                */
                class DescribeUpdatableDataEnginesResponse : public AbstractModel
                {
                public:
                    DescribeUpdatableDataEnginesResponse();
                    ~DescribeUpdatableDataEnginesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群基础信息
                     * @return DataEngineBasicInfos 集群基础信息
                     * 
                     */
                    std::vector<DataEngineBasicInfo> GetDataEngineBasicInfos() const;

                    /**
                     * 判断参数 DataEngineBasicInfos 是否已赋值
                     * @return DataEngineBasicInfos 是否已赋值
                     * 
                     */
                    bool DataEngineBasicInfosHasBeenSet() const;

                    /**
                     * 获取集群个数
                     * @return TotalCount 集群个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 集群基础信息
                     */
                    std::vector<DataEngineBasicInfo> m_dataEngineBasicInfos;
                    bool m_dataEngineBasicInfosHasBeenSet;

                    /**
                     * 集群个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESRESPONSE_H_
