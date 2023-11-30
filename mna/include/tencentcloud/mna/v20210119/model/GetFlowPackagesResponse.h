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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/FlowPackageInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowPackages返回参数结构体
                */
                class GetFlowPackagesResponse : public AbstractModel
                {
                public:
                    GetFlowPackagesResponse();
                    ~GetFlowPackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流量包列表
                     * @return PackageList 流量包列表
                     * 
                     */
                    std::vector<FlowPackageInfo> GetPackageList() const;

                    /**
                     * 判断参数 PackageList 是否已赋值
                     * @return PackageList 是否已赋值
                     * 
                     */
                    bool PackageListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 流量包列表
                     */
                    std::vector<FlowPackageInfo> m_packageList;
                    bool m_packageListHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESRESPONSE_H_
