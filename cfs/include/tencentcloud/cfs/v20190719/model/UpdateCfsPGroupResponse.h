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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * UpdateCfsPGroup返回参数结构体
                */
                class UpdateCfsPGroupResponse : public AbstractModel
                {
                public:
                    UpdateCfsPGroupResponse();
                    ~UpdateCfsPGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组ID
                     * @return PGroupId 权限组ID
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取权限组名称
                     * @return Name 权限组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return DescInfo 描述信息
                     * 
                     */
                    std::string GetDescInfo() const;

                    /**
                     * 判断参数 DescInfo 是否已赋值
                     * @return DescInfo 是否已赋值
                     * 
                     */
                    bool DescInfoHasBeenSet() const;

                private:

                    /**
                     * 权限组ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 权限组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_descInfo;
                    bool m_descInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPRESPONSE_H_
