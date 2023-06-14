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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDCNDETAILRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDCNDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/DcnDetailItem.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDcnDetail返回参数结构体
                */
                class DescribeDcnDetailResponse : public AbstractModel
                {
                public:
                    DescribeDcnDetailResponse();
                    ~DescribeDcnDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DCN同步详情
                     * @return DcnDetails DCN同步详情
                     * 
                     */
                    std::vector<DcnDetailItem> GetDcnDetails() const;

                    /**
                     * 判断参数 DcnDetails 是否已赋值
                     * @return DcnDetails 是否已赋值
                     * 
                     */
                    bool DcnDetailsHasBeenSet() const;

                private:

                    /**
                     * DCN同步详情
                     */
                    std::vector<DcnDetailItem> m_dcnDetails;
                    bool m_dcnDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDCNDETAILRESPONSE_H_
