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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_ENVINTERNETACCESSSETTING_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_ENVINTERNETACCESSSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 大区环境网络配置
                */
                class EnvInternetAccessSetting : public AbstractModel
                {
                public:
                    EnvInternetAccessSetting();
                    ~EnvInternetAccessSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取true：不能访问公网
                     * @return DisableExternalAccess true：不能访问公网
                     * 
                     */
                    bool GetDisableExternalAccess() const;

                    /**
                     * 设置true：不能访问公网
                     * @param _disableExternalAccess true：不能访问公网
                     * 
                     */
                    void SetDisableExternalAccess(const bool& _disableExternalAccess);

                    /**
                     * 判断参数 DisableExternalAccess 是否已赋值
                     * @return DisableExternalAccess 是否已赋值
                     * 
                     */
                    bool DisableExternalAccessHasBeenSet() const;

                    /**
                     * 获取true：不能创建数据下载权限
                     * @return DisableDownloadDataAcl true：不能创建数据下载权限
                     * 
                     */
                    bool GetDisableDownloadDataAcl() const;

                    /**
                     * 设置true：不能创建数据下载权限
                     * @param _disableDownloadDataAcl true：不能创建数据下载权限
                     * 
                     */
                    void SetDisableDownloadDataAcl(const bool& _disableDownloadDataAcl);

                    /**
                     * 判断参数 DisableDownloadDataAcl 是否已赋值
                     * @return DisableDownloadDataAcl 是否已赋值
                     * 
                     */
                    bool DisableDownloadDataAclHasBeenSet() const;

                private:

                    /**
                     * true：不能访问公网
                     */
                    bool m_disableExternalAccess;
                    bool m_disableExternalAccessHasBeenSet;

                    /**
                     * true：不能创建数据下载权限
                     */
                    bool m_disableDownloadDataAcl;
                    bool m_disableDownloadDataAclHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ENVINTERNETACCESSSETTING_H_
