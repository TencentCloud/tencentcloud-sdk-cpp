/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DELETEDIRECTCONNECTREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DELETEDIRECTCONNECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DeleteDirectConnect请求参数结构体
                */
                class DeleteDirectConnectRequest : public AbstractModel
                {
                public:
                    DeleteDirectConnectRequest();
                    ~DeleteDirectConnectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>物理专线的ID。</p>
                     * @return DirectConnectId <p>物理专线的ID。</p>
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置<p>物理专线的ID。</p>
                     * @param _directConnectId <p>物理专线的ID。</p>
                     * 
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     * 
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取<p>预计裁撤时间</p>
                     * @return PlannedRepealDate <p>预计裁撤时间</p>
                     * 
                     */
                    std::string GetPlannedRepealDate() const;

                    /**
                     * 设置<p>预计裁撤时间</p>
                     * @param _plannedRepealDate <p>预计裁撤时间</p>
                     * 
                     */
                    void SetPlannedRepealDate(const std::string& _plannedRepealDate);

                    /**
                     * 判断参数 PlannedRepealDate 是否已赋值
                     * @return PlannedRepealDate 是否已赋值
                     * 
                     */
                    bool PlannedRepealDateHasBeenSet() const;

                private:

                    /**
                     * <p>物理专线的ID。</p>
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * <p>预计裁撤时间</p>
                     */
                    std::string m_plannedRepealDate;
                    bool m_plannedRepealDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DELETEDIRECTCONNECTREQUEST_H_
