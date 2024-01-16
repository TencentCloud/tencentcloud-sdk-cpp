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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETESHAREUNITREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETESHAREUNITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DeleteShareUnit请求参数结构体
                */
                class DeleteShareUnitRequest : public AbstractModel
                {
                public:
                    DeleteShareUnitRequest();
                    ~DeleteShareUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享单元ID。
                     * @return UnitId 共享单元ID。
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置共享单元ID。
                     * @param _unitId 共享单元ID。
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                private:

                    /**
                     * 共享单元ID。
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETESHAREUNITREQUEST_H_
