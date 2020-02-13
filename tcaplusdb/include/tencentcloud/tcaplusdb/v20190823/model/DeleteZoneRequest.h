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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEZONEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DeleteZone请求参数结构体
                */
                class DeleteZoneRequest : public AbstractModel
                {
                public:
                    DeleteZoneRequest();
                    ~DeleteZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大区所属的应用实例ID
                     * @return ApplicationId 大区所属的应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置大区所属的应用实例ID
                     * @param ApplicationId 大区所属的应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取大区ID
                     * @return LogicZoneId 大区ID
                     */
                    std::string GetLogicZoneId() const;

                    /**
                     * 设置大区ID
                     * @param LogicZoneId 大区ID
                     */
                    void SetLogicZoneId(const std::string& _logicZoneId);

                    /**
                     * 判断参数 LogicZoneId 是否已赋值
                     * @return LogicZoneId 是否已赋值
                     */
                    bool LogicZoneIdHasBeenSet() const;

                private:

                    /**
                     * 大区所属的应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 大区ID
                     */
                    std::string m_logicZoneId;
                    bool m_logicZoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEZONEREQUEST_H_
