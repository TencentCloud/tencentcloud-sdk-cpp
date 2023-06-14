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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATECHOOSEVPCSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATECHOOSEVPCSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcZoneData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateChooseVpcs请求参数结构体
                */
                class CreateChooseVpcsRequest : public AbstractModel
                {
                public:
                    CreateChooseVpcsRequest();
                    ~CreateChooseVpcsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取vpc列表
                     * @return VpcList vpc列表
                     * 
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置vpc列表
                     * @param _vpcList vpc列表
                     * 
                     */
                    void SetVpcList(const std::vector<std::string>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取zone列表
                     * @return AllZoneList zone列表
                     * 
                     */
                    std::vector<VpcZoneData> GetAllZoneList() const;

                    /**
                     * 设置zone列表
                     * @param _allZoneList zone列表
                     * 
                     */
                    void SetAllZoneList(const std::vector<VpcZoneData>& _allZoneList);

                    /**
                     * 判断参数 AllZoneList 是否已赋值
                     * @return AllZoneList 是否已赋值
                     * 
                     */
                    bool AllZoneListHasBeenSet() const;

                private:

                    /**
                     * vpc列表
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * zone列表
                     */
                    std::vector<VpcZoneData> m_allZoneList;
                    bool m_allZoneListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATECHOOSEVPCSREQUEST_H_
