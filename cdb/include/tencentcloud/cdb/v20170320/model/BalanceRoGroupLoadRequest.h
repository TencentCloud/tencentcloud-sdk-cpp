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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BALANCEROGROUPLOADREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BALANCEROGROUPLOADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * BalanceRoGroupLoad请求参数结构体
                */
                class BalanceRoGroupLoadRequest : public AbstractModel
                {
                public:
                    BalanceRoGroupLoadRequest();
                    ~BalanceRoGroupLoadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RO 组的 ID，格式如：cdbrg-c1nl9rpv。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 获取。
                     * @return RoGroupId RO 组的 ID，格式如：cdbrg-c1nl9rpv。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 获取。
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置RO 组的 ID，格式如：cdbrg-c1nl9rpv。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 获取。
                     * @param _roGroupId RO 组的 ID，格式如：cdbrg-c1nl9rpv。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 获取。
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                private:

                    /**
                     * RO 组的 ID，格式如：cdbrg-c1nl9rpv。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 获取。
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BALANCEROGROUPLOADREQUEST_H_
