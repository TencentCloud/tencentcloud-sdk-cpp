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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESBGAPPKEEPALIVEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESBGAPPKEEPALIVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * SetAndroidInstancesBGAppKeepAlive请求参数结构体
                */
                class SetAndroidInstancesBGAppKeepAliveRequest : public AbstractModel
                {
                public:
                    SetAndroidInstancesBGAppKeepAliveRequest();
                    ~SetAndroidInstancesBGAppKeepAliveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID 列表（最大100条数据）
                     * @return AndroidInstanceIds 安卓实例 ID 列表（最大100条数据）
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置安卓实例 ID 列表（最大100条数据）
                     * @param _androidInstanceIds 安卓实例 ID 列表（最大100条数据）
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取操作类型，取值：ADD 添加应用到后台保活列表、REMOVE 从后台保活列表中移除应用、SET 全量设置后台保活列表，替换当前列表。
                     * @return Operation 操作类型，取值：ADD 添加应用到后台保活列表、REMOVE 从后台保活列表中移除应用、SET 全量设置后台保活列表，替换当前列表。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型，取值：ADD 添加应用到后台保活列表、REMOVE 从后台保活列表中移除应用、SET 全量设置后台保活列表，替换当前列表。
                     * @param _operation 操作类型，取值：ADD 添加应用到后台保活列表、REMOVE 从后台保活列表中移除应用、SET 全量设置后台保活列表，替换当前列表。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取应用包名列表
                     * @return PackageNames 应用包名列表
                     * 
                     */
                    std::vector<std::string> GetPackageNames() const;

                    /**
                     * 设置应用包名列表
                     * @param _packageNames 应用包名列表
                     * 
                     */
                    void SetPackageNames(const std::vector<std::string>& _packageNames);

                    /**
                     * 判断参数 PackageNames 是否已赋值
                     * @return PackageNames 是否已赋值
                     * 
                     */
                    bool PackageNamesHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID 列表（最大100条数据）
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 操作类型，取值：ADD 添加应用到后台保活列表、REMOVE 从后台保活列表中移除应用、SET 全量设置后台保活列表，替换当前列表。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 应用包名列表
                     */
                    std::vector<std::string> m_packageNames;
                    bool m_packageNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESBGAPPKEEPALIVEREQUEST_H_
