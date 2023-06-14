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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 权限组数组
                */
                class PGroupInfo : public AbstractModel
                {
                public:
                    PGroupInfo();
                    ~PGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限组ID
                     * @return PGroupId 权限组ID
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置权限组ID
                     * @param _pGroupId 权限组ID
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
                     * 获取权限组名称
                     * @return Name 权限组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置权限组名称
                     * @param _name 权限组名称
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
                     * 获取描述信息
                     * @return DescInfo 描述信息
                     * 
                     */
                    std::string GetDescInfo() const;

                    /**
                     * 设置描述信息
                     * @param _descInfo 描述信息
                     * 
                     */
                    void SetDescInfo(const std::string& _descInfo);

                    /**
                     * 判断参数 DescInfo 是否已赋值
                     * @return DescInfo 是否已赋值
                     * 
                     */
                    bool DescInfoHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CDate 创建时间
                     * 
                     */
                    std::string GetCDate() const;

                    /**
                     * 设置创建时间
                     * @param _cDate 创建时间
                     * 
                     */
                    void SetCDate(const std::string& _cDate);

                    /**
                     * 判断参数 CDate 是否已赋值
                     * @return CDate 是否已赋值
                     * 
                     */
                    bool CDateHasBeenSet() const;

                    /**
                     * 获取关联文件系统个数
                     * @return BindCfsNum 关联文件系统个数
                     * 
                     */
                    int64_t GetBindCfsNum() const;

                    /**
                     * 设置关联文件系统个数
                     * @param _bindCfsNum 关联文件系统个数
                     * 
                     */
                    void SetBindCfsNum(const int64_t& _bindCfsNum);

                    /**
                     * 判断参数 BindCfsNum 是否已赋值
                     * @return BindCfsNum 是否已赋值
                     * 
                     */
                    bool BindCfsNumHasBeenSet() const;

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

                    /**
                     * 创建时间
                     */
                    std::string m_cDate;
                    bool m_cDateHasBeenSet;

                    /**
                     * 关联文件系统个数
                     */
                    int64_t m_bindCfsNum;
                    bool m_bindCfsNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPINFO_H_
