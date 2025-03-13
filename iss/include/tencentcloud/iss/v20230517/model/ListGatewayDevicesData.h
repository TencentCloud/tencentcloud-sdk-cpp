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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYDEVICESDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYDEVICESDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/GatewayDevice.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询网关设备列表返回数据
                */
                class ListGatewayDevicesData : public AbstractModel
                {
                public:
                    ListGatewayDevicesData();
                    ~ListGatewayDevicesData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关下设备列表
                     * @return List 网关下设备列表
                     * 
                     */
                    std::vector<GatewayDevice> GetList() const;

                    /**
                     * 设置网关下设备列表
                     * @param _list 网关下设备列表
                     * 
                     */
                    void SetList(const std::vector<GatewayDevice>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取网关下设备总数
                     * @return TotalCount 网关下设备总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置网关下设备总数
                     * @param _totalCount 网关下设备总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 网关下设备列表
                     */
                    std::vector<GatewayDevice> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 网关下设备总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYDEVICESDATA_H_
