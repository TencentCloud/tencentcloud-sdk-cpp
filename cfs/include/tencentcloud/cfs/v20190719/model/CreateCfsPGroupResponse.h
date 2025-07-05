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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSPGROUPRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSPGROUPRESPONSE_H_

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
                * CreateCfsPGroup返回参数结构体
                */
                class CreateCfsPGroupResponse : public AbstractModel
                {
                public:
                    CreateCfsPGroupResponse();
                    ~CreateCfsPGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组 ID
                     * @return PGroupId 权限组 ID
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
                     * 获取权限组名字
                     * @return Name 权限组名字
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
                     * 获取权限组描述信息
                     * @return DescInfo 权限组描述信息
                     * 
                     */
                    std::string GetDescInfo() const;

                    /**
                     * 判断参数 DescInfo 是否已赋值
                     * @return DescInfo 是否已赋值
                     * 
                     */
                    bool DescInfoHasBeenSet() const;

                    /**
                     * 获取已经与该权限组绑定的文件系统个数
                     * @return BindCfsNum 已经与该权限组绑定的文件系统个数
                     * 
                     */
                    int64_t GetBindCfsNum() const;

                    /**
                     * 判断参数 BindCfsNum 是否已赋值
                     * @return BindCfsNum 是否已赋值
                     * 
                     */
                    bool BindCfsNumHasBeenSet() const;

                    /**
                     * 获取权限组创建时间
                     * @return CDate 权限组创建时间
                     * 
                     */
                    std::string GetCDate() const;

                    /**
                     * 判断参数 CDate 是否已赋值
                     * @return CDate 是否已赋值
                     * 
                     */
                    bool CDateHasBeenSet() const;

                private:

                    /**
                     * 权限组 ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 权限组名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权限组描述信息
                     */
                    std::string m_descInfo;
                    bool m_descInfoHasBeenSet;

                    /**
                     * 已经与该权限组绑定的文件系统个数
                     */
                    int64_t m_bindCfsNum;
                    bool m_bindCfsNumHasBeenSet;

                    /**
                     * 权限组创建时间
                     */
                    std::string m_cDate;
                    bool m_cDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSPGROUPRESPONSE_H_
