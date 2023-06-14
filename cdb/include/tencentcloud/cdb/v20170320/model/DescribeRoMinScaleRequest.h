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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROMINSCALEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROMINSCALEREQUEST_H_

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
                * DescribeRoMinScale请求参数结构体
                */
                class DescribeRoMinScaleRequest : public AbstractModel
                {
                public:
                    DescribeRoMinScaleRequest();
                    ~DescribeRoMinScaleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取只读实例ID，格式如：cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与MasterInstanceId参数不能同时为空。
                     * @return RoInstanceId 只读实例ID，格式如：cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与MasterInstanceId参数不能同时为空。
                     * 
                     */
                    std::string GetRoInstanceId() const;

                    /**
                     * 设置只读实例ID，格式如：cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与MasterInstanceId参数不能同时为空。
                     * @param _roInstanceId 只读实例ID，格式如：cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与MasterInstanceId参数不能同时为空。
                     * 
                     */
                    void SetRoInstanceId(const std::string& _roInstanceId);

                    /**
                     * 判断参数 RoInstanceId 是否已赋值
                     * @return RoInstanceId 是否已赋值
                     * 
                     */
                    bool RoInstanceIdHasBeenSet() const;

                    /**
                     * 获取主实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与RoInstanceId参数不能同时为空。注意，当传入参数包含RoInstanceId时，返回值为只读实例升级时的最小规格；当传入参数只包含MasterInstanceId时，返回值为只读实例购买时的最小规格。
                     * @return MasterInstanceId 主实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与RoInstanceId参数不能同时为空。注意，当传入参数包含RoInstanceId时，返回值为只读实例升级时的最小规格；当传入参数只包含MasterInstanceId时，返回值为只读实例购买时的最小规格。
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置主实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与RoInstanceId参数不能同时为空。注意，当传入参数包含RoInstanceId时，返回值为只读实例升级时的最小规格；当传入参数只包含MasterInstanceId时，返回值为只读实例购买时的最小规格。
                     * @param _masterInstanceId 主实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与RoInstanceId参数不能同时为空。注意，当传入参数包含RoInstanceId时，返回值为只读实例升级时的最小规格；当传入参数只包含MasterInstanceId时，返回值为只读实例购买时的最小规格。
                     * 
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 只读实例ID，格式如：cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与MasterInstanceId参数不能同时为空。
                     */
                    std::string m_roInstanceId;
                    bool m_roInstanceIdHasBeenSet;

                    /**
                     * 主实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，该参数与RoInstanceId参数不能同时为空。注意，当传入参数包含RoInstanceId时，返回值为只读实例升级时的最小规格；当传入参数只包含MasterInstanceId时，返回值为只读实例购买时的最小规格。
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROMINSCALEREQUEST_H_
