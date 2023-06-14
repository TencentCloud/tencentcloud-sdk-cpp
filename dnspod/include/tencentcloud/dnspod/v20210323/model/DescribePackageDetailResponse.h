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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEPACKAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEPACKAGEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/PackageDetailItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribePackageDetail返回参数结构体
                */
                class DescribePackageDetailResponse : public AbstractModel
                {
                public:
                    DescribePackageDetailResponse();
                    ~DescribePackageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐配置详情
                     * @return Info 套餐配置详情
                     * 
                     */
                    std::vector<PackageDetailItem> GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取套餐代码列表
                     * @return LevelMap 套餐代码列表
                     * 
                     */
                    std::vector<std::string> GetLevelMap() const;

                    /**
                     * 判断参数 LevelMap 是否已赋值
                     * @return LevelMap 是否已赋值
                     * 
                     */
                    bool LevelMapHasBeenSet() const;

                private:

                    /**
                     * 套餐配置详情
                     */
                    std::vector<PackageDetailItem> m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 套餐代码列表
                     */
                    std::vector<std::string> m_levelMap;
                    bool m_levelMapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEPACKAGEDETAILRESPONSE_H_
