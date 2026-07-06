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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLDETAILREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSkillDetail请求参数结构体
                */
                class DescribeSkillDetailRequest : public AbstractModel
                {
                public:
                    DescribeSkillDetailRequest();
                    ~DescribeSkillDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取skillID
                     * @return SkillId skillID
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置skillID
                     * @param _skillId skillID
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取空间ID
                     * @return SpaceId 空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间ID
                     * @param _spaceId 空间ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取版本过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - Perspective: 视角枚举,字符串单值,Values 长度必须为 1,多值视为非法;仅作用于详情返回的 version_list 裁剪,不决定接口本身可见性;不传默认 USER (USER=使用者视角,version_list 仅返回已上线版本 / EDITOR=编辑者视角,version_list 返回全部存活版本 / ALL=全量视角,同 EDITOR)
                     * @return VersionFilterList 版本过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - Perspective: 视角枚举,字符串单值,Values 长度必须为 1,多值视为非法;仅作用于详情返回的 version_list 裁剪,不决定接口本身可见性;不传默认 USER (USER=使用者视角,version_list 仅返回已上线版本 / EDITOR=编辑者视角,version_list 返回全部存活版本 / ALL=全量视角,同 EDITOR)
                     * 
                     */
                    std::vector<Filter> GetVersionFilterList() const;

                    /**
                     * 设置版本过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - Perspective: 视角枚举,字符串单值,Values 长度必须为 1,多值视为非法;仅作用于详情返回的 version_list 裁剪,不决定接口本身可见性;不传默认 USER (USER=使用者视角,version_list 仅返回已上线版本 / EDITOR=编辑者视角,version_list 返回全部存活版本 / ALL=全量视角,同 EDITOR)
                     * @param _versionFilterList 版本过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - Perspective: 视角枚举,字符串单值,Values 长度必须为 1,多值视为非法;仅作用于详情返回的 version_list 裁剪,不决定接口本身可见性;不传默认 USER (USER=使用者视角,version_list 仅返回已上线版本 / EDITOR=编辑者视角,version_list 返回全部存活版本 / ALL=全量视角,同 EDITOR)
                     * 
                     */
                    void SetVersionFilterList(const std::vector<Filter>& _versionFilterList);

                    /**
                     * 判断参数 VersionFilterList 是否已赋值
                     * @return VersionFilterList 是否已赋值
                     * 
                     */
                    bool VersionFilterListHasBeenSet() const;

                private:

                    /**
                     * skillID
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * 空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 版本过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - Perspective: 视角枚举,字符串单值,Values 长度必须为 1,多值视为非法;仅作用于详情返回的 version_list 裁剪,不决定接口本身可见性;不传默认 USER (USER=使用者视角,version_list 仅返回已上线版本 / EDITOR=编辑者视角,version_list 返回全部存活版本 / ALL=全量视角,同 EDITOR)
                     */
                    std::vector<Filter> m_versionFilterList;
                    bool m_versionFilterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLDETAILREQUEST_H_
