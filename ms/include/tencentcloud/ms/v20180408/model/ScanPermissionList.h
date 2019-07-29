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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SCANPERMISSIONLIST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SCANPERMISSIONLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/ScanPermissionInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 安全扫描系统权限信息
                */
                class ScanPermissionList : public AbstractModel
                {
                public:
                    ScanPermissionList();
                    ~ScanPermissionList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统权限信息
                     * @return PermissionList 系统权限信息
                     */
                    std::vector<ScanPermissionInfo> GetPermissionList() const;

                    /**
                     * 设置系统权限信息
                     * @param PermissionList 系统权限信息
                     */
                    void SetPermissionList(const std::vector<ScanPermissionInfo>& _permissionList);

                    /**
                     * 判断参数 PermissionList 是否已赋值
                     * @return PermissionList 是否已赋值
                     */
                    bool PermissionListHasBeenSet() const;

                private:

                    /**
                     * 系统权限信息
                     */
                    std::vector<ScanPermissionInfo> m_permissionList;
                    bool m_permissionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SCANPERMISSIONLIST_H_
