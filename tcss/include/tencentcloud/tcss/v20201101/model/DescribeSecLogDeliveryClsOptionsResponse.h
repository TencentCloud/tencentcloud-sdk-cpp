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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYCLSOPTIONSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYCLSOPTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClsLogsetInfo.h>
#include <tencentcloud/tcss/v20201101/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogDeliveryClsOptions返回参数结构体
                */
                class DescribeSecLogDeliveryClsOptionsResponse : public AbstractModel
                {
                public:
                    DescribeSecLogDeliveryClsOptionsResponse();
                    ~DescribeSecLogDeliveryClsOptionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cls可选日志集合列表(仅当入参ClsRegion不为空时返回)
                     * @return LogSetList cls可选日志集合列表(仅当入参ClsRegion不为空时返回)
                     * 
                     */
                    std::vector<ClsLogsetInfo> GetLogSetList() const;

                    /**
                     * 判断参数 LogSetList 是否已赋值
                     * @return LogSetList 是否已赋值
                     * 
                     */
                    bool LogSetListHasBeenSet() const;

                    /**
                     * 获取可选地域列表(仅当入参ClsRegion为空时返回)
                     * @return RegionList 可选地域列表(仅当入参ClsRegion为空时返回)
                     * 
                     */
                    std::vector<RegionInfo> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * cls可选日志集合列表(仅当入参ClsRegion不为空时返回)
                     */
                    std::vector<ClsLogsetInfo> m_logSetList;
                    bool m_logSetListHasBeenSet;

                    /**
                     * 可选地域列表(仅当入参ClsRegion为空时返回)
                     */
                    std::vector<RegionInfo> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYCLSOPTIONSRESPONSE_H_
