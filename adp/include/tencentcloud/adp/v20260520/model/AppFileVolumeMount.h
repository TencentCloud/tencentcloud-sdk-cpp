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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPFILEVOLUMEMOUNT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPFILEVOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FileVolumeMount.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用级云盘挂载配置
                */
                class AppFileVolumeMount : public AbstractModel
                {
                public:
                    AppFileVolumeMount();
                    ~AppFileVolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用云盘配置</p>
                     * @return FileVolumeMount <p>应用云盘配置</p>
                     * 
                     */
                    FileVolumeMount GetFileVolumeMount() const;

                    /**
                     * 设置<p>应用云盘配置</p>
                     * @param _fileVolumeMount <p>应用云盘配置</p>
                     * 
                     */
                    void SetFileVolumeMount(const FileVolumeMount& _fileVolumeMount);

                    /**
                     * 判断参数 FileVolumeMount 是否已赋值
                     * @return FileVolumeMount 是否已赋值
                     * 
                     */
                    bool FileVolumeMountHasBeenSet() const;

                    /**
                     * 获取<p>1：新增 2：修改 3：删除</p>
                     * @return Action <p>1：新增 2：修改 3：删除</p>
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置<p>1：新增 2：修改 3：删除</p>
                     * @param _action <p>1：新增 2：修改 3：删除</p>
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * <p>应用云盘配置</p>
                     */
                    FileVolumeMount m_fileVolumeMount;
                    bool m_fileVolumeMountHasBeenSet;

                    /**
                     * <p>1：新增 2：修改 3：删除</p>
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPFILEVOLUMEMOUNT_H_
