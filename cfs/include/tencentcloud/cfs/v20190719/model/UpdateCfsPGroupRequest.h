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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPREQUEST_H_

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
                * UpdateCfsPGroup请求参数结构体
                */
                class UpdateCfsPGroupRequest : public AbstractModel
                {
                public:
                    UpdateCfsPGroupRequest();
                    ~UpdateCfsPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * @return PGroupId 权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * @param _pGroupId 权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取权限组名称，1-64个字符且只能为中文，字母，数字，下划线或横线
                     * @return Name 权限组名称，1-64个字符且只能为中文，字母，数字，下划线或横线
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置权限组名称，1-64个字符且只能为中文，字母，数字，下划线或横线
                     * @param _name 权限组名称，1-64个字符且只能为中文，字母，数字，下划线或横线
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
                     * 获取权限组描述信息，1-255个字符。 Name和Descinfo不能同时为空
                     * @return DescInfo 权限组描述信息，1-255个字符。 Name和Descinfo不能同时为空
                     * 
                     */
                    std::string GetDescInfo() const;

                    /**
                     * 设置权限组描述信息，1-255个字符。 Name和Descinfo不能同时为空
                     * @param _descInfo 权限组描述信息，1-255个字符。 Name和Descinfo不能同时为空
                     * 
                     */
                    void SetDescInfo(const std::string& _descInfo);

                    /**
                     * 判断参数 DescInfo 是否已赋值
                     * @return DescInfo 是否已赋值
                     * 
                     */
                    bool DescInfoHasBeenSet() const;

                private:

                    /**
                     * 权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 权限组名称，1-64个字符且只能为中文，字母，数字，下划线或横线
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权限组描述信息，1-255个字符。 Name和Descinfo不能同时为空
                     */
                    std::string m_descInfo;
                    bool m_descInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPREQUEST_H_
