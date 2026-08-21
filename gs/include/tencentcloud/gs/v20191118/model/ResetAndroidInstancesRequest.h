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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_RESETANDROIDINSTANCESREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_RESETANDROIDINSTANCESREQUEST_H_

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
                * ResetAndroidInstances请求参数结构体
                */
                class ResetAndroidInstancesRequest : public AbstractModel
                {
                public:
                    ResetAndroidInstancesRequest();
                    ~ResetAndroidInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID列表</p>
                     * @return AndroidInstanceIds <p>实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置<p>实例ID列表</p>
                     * @param _androidInstanceIds <p>实例ID列表</p>
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
                     * 获取<p>指定有效的镜像 ID。<br>默认取值：默认使用当前镜像。</p>
                     * @return AndroidInstanceImageId <p>指定有效的镜像 ID。<br>默认取值：默认使用当前镜像。</p>
                     * 
                     */
                    std::string GetAndroidInstanceImageId() const;

                    /**
                     * 设置<p>指定有效的镜像 ID。<br>默认取值：默认使用当前镜像。</p>
                     * @param _androidInstanceImageId <p>指定有效的镜像 ID。<br>默认取值：默认使用当前镜像。</p>
                     * 
                     */
                    void SetAndroidInstanceImageId(const std::string& _androidInstanceImageId);

                    /**
                     * 判断参数 AndroidInstanceImageId 是否已赋值
                     * @return AndroidInstanceImageId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageIdHasBeenSet() const;

                    /**
                     * 获取<p>重置模式。在 AndroidInstanceImageId 不为空时才生效。</p><p>CleanData：默认选项，清理系统属性和用户数据<br>KeepSystemProperties：只保留系统属性<br>KeepData: 保留系统属性和用户数据</p>
                     * @return Mode <p>重置模式。在 AndroidInstanceImageId 不为空时才生效。</p><p>CleanData：默认选项，清理系统属性和用户数据<br>KeepSystemProperties：只保留系统属性<br>KeepData: 保留系统属性和用户数据</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>重置模式。在 AndroidInstanceImageId 不为空时才生效。</p><p>CleanData：默认选项，清理系统属性和用户数据<br>KeepSystemProperties：只保留系统属性<br>KeepData: 保留系统属性和用户数据</p>
                     * @param _mode <p>重置模式。在 AndroidInstanceImageId 不为空时才生效。</p><p>CleanData：默认选项，清理系统属性和用户数据<br>KeepSystemProperties：只保留系统属性<br>KeepData: 保留系统属性和用户数据</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID列表</p>
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * <p>指定有效的镜像 ID。<br>默认取值：默认使用当前镜像。</p>
                     */
                    std::string m_androidInstanceImageId;
                    bool m_androidInstanceImageIdHasBeenSet;

                    /**
                     * <p>重置模式。在 AndroidInstanceImageId 不为空时才生效。</p><p>CleanData：默认选项，清理系统属性和用户数据<br>KeepSystemProperties：只保留系统属性<br>KeepData: 保留系统属性和用户数据</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_RESETANDROIDINSTANCESREQUEST_H_
