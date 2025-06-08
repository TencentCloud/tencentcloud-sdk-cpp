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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESFGAPPKEEPALIVEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESFGAPPKEEPALIVEREQUEST_H_

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
                * SetAndroidInstancesFGAppKeepAlive请求参数结构体
                */
                class SetAndroidInstancesFGAppKeepAliveRequest : public AbstractModel
                {
                public:
                    SetAndroidInstancesFGAppKeepAliveRequest();
                    ~SetAndroidInstancesFGAppKeepAliveRequest() = default;
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
                     * 获取操作类型，取值：ENABLE 开启保活、DISABLE 关闭保活。当关闭保活时，PackageName 参数传空即可
                     * @return Operation 操作类型，取值：ENABLE 开启保活、DISABLE 关闭保活。当关闭保活时，PackageName 参数传空即可
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型，取值：ENABLE 开启保活、DISABLE 关闭保活。当关闭保活时，PackageName 参数传空即可
                     * @param _operation 操作类型，取值：ENABLE 开启保活、DISABLE 关闭保活。当关闭保活时，PackageName 参数传空即可
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
                     * 获取应用包名，开启保活时，必须传入 PackageName
                     * @return PackageName 应用包名，开启保活时，必须传入 PackageName
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置应用包名，开启保活时，必须传入 PackageName
                     * @param _packageName 应用包名，开启保活时，必须传入 PackageName
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID 列表（最大100条数据）
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 操作类型，取值：ENABLE 开启保活、DISABLE 关闭保活。当关闭保活时，PackageName 参数传空即可
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 应用包名，开启保活时，必须传入 PackageName
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESFGAPPKEEPALIVEREQUEST_H_
