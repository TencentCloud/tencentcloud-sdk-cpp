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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEINFO_H_

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
                class ModifyRouteTableInfo : public AbstractModel
                {
                public:
                    ModifyRouteTableInfo();
                    ~ModifyRouteTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云联网路由表id。
                     * @return RouteTableId 云联网路由表id。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置云联网路由表id。
                     * @param _routeTableId 云联网路由表id。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取云联网路由表名称。Name和Description 两者必传一个。
                     * @return Name 云联网路由表名称。Name和Description 两者必传一个。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置云联网路由表名称。Name和Description 两者必传一个。
                     * @param _name 云联网路由表名称。Name和Description 两者必传一个。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取云联网路由表描述。Name和Description 两者必传一个。
                     * @return Description 云联网路由表描述。Name和Description 两者必传一个。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置云联网路由表描述。Name和Description 两者必传一个。
                     * @param _description 云联网路由表描述。Name和Description 两者必传一个。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 云联网路由表id。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 云联网路由表名称。Name和Description 两者必传一个。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云联网路由表描述。Name和Description 两者必传一个。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEINFO_H_
