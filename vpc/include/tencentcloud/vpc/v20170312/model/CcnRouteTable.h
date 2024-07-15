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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网路由表信息
                */
                class CcnRouteTable : public AbstractModel
                {
                public:
                    CcnRouteTable();
                    ~CcnRouteTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云联网ID。
                     * @return CcnId 云联网ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID。
                     * @param _ccnId 云联网ID。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网路由表ID。
                     * @return CcnRouteTableId 云联网路由表ID。
                     * 
                     */
                    std::string GetCcnRouteTableId() const;

                    /**
                     * 设置云联网路由表ID。
                     * @param _ccnRouteTableId 云联网路由表ID。
                     * 
                     */
                    void SetCcnRouteTableId(const std::string& _ccnRouteTableId);

                    /**
                     * 判断参数 CcnRouteTableId 是否已赋值
                     * @return CcnRouteTableId 是否已赋值
                     * 
                     */
                    bool CcnRouteTableIdHasBeenSet() const;

                    /**
                     * 获取云联网路由表名称。
                     * @return RouteTableName 云联网路由表名称。
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置云联网路由表名称。
                     * @param _routeTableName 云联网路由表名称。
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取云联网路由表描述。
                     * @return RouteTableDescription 云联网路由表描述。
                     * 
                     */
                    std::string GetRouteTableDescription() const;

                    /**
                     * 设置云联网路由表描述。
                     * @param _routeTableDescription 云联网路由表描述。
                     * 
                     */
                    void SetRouteTableDescription(const std::string& _routeTableDescription);

                    /**
                     * 判断参数 RouteTableDescription 是否已赋值
                     * @return RouteTableDescription 是否已赋值
                     * 
                     */
                    bool RouteTableDescriptionHasBeenSet() const;

                    /**
                     * 获取True：是默认路由表 False：非默认路由表。
                     * @return IsDefaultTable True：是默认路由表 False：非默认路由表。
                     * 
                     */
                    bool GetIsDefaultTable() const;

                    /**
                     * 设置True：是默认路由表 False：非默认路由表。
                     * @param _isDefaultTable True：是默认路由表 False：非默认路由表。
                     * 
                     */
                    void SetIsDefaultTable(const bool& _isDefaultTable);

                    /**
                     * 判断参数 IsDefaultTable 是否已赋值
                     * @return IsDefaultTable 是否已赋值
                     * 
                     */
                    bool IsDefaultTableHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 云联网ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网路由表ID。
                     */
                    std::string m_ccnRouteTableId;
                    bool m_ccnRouteTableIdHasBeenSet;

                    /**
                     * 云联网路由表名称。
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * 云联网路由表描述。
                     */
                    std::string m_routeTableDescription;
                    bool m_routeTableDescriptionHasBeenSet;

                    /**
                     * True：是默认路由表 False：非默认路由表。
                     */
                    bool m_isDefaultTable;
                    bool m_isDefaultTableHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLE_H_
