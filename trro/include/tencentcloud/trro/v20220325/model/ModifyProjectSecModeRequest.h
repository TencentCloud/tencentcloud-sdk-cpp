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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTSECMODEREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTSECMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyProjectSecMode请求参数结构体
                */
                class ModifyProjectSecModeRequest : public AbstractModel
                {
                public:
                    ModifyProjectSecModeRequest();
                    ~ModifyProjectSecModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取安全模式  
0：关闭项目共享密钥 
1：开启项目共享密钥
                     * @return Mode 安全模式  
0：关闭项目共享密钥 
1：开启项目共享密钥
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置安全模式  
0：关闭项目共享密钥 
1：开启项目共享密钥
                     * @param _mode 安全模式  
0：关闭项目共享密钥 
1：开启项目共享密钥
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取项目密钥 32位 小写英文+数字；  项目密钥模式必填
                     * @return Key 项目密钥 32位 小写英文+数字；  项目密钥模式必填
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置项目密钥 32位 小写英文+数字；  项目密钥模式必填
                     * @param _key 项目密钥 32位 小写英文+数字；  项目密钥模式必填
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取自动注册方式
0：关闭自动注册
1：仅允许现场设备自动注册
2：仅允许远端设备自动注册
3：允许现场和远端设备均自动注册
                     * @return AutoRegister 自动注册方式
0：关闭自动注册
1：仅允许现场设备自动注册
2：仅允许远端设备自动注册
3：允许现场和远端设备均自动注册
                     * 
                     */
                    int64_t GetAutoRegister() const;

                    /**
                     * 设置自动注册方式
0：关闭自动注册
1：仅允许现场设备自动注册
2：仅允许远端设备自动注册
3：允许现场和远端设备均自动注册
                     * @param _autoRegister 自动注册方式
0：关闭自动注册
1：仅允许现场设备自动注册
2：仅允许远端设备自动注册
3：允许现场和远端设备均自动注册
                     * 
                     */
                    void SetAutoRegister(const int64_t& _autoRegister);

                    /**
                     * 判断参数 AutoRegister 是否已赋值
                     * @return AutoRegister 是否已赋值
                     * 
                     */
                    bool AutoRegisterHasBeenSet() const;

                    /**
                     * 获取是否允许远端获取现场设备列表（getGwList）
0：不允许
1：允许
                     * @return FieldListEnable 是否允许远端获取现场设备列表（getGwList）
0：不允许
1：允许
                     * 
                     */
                    int64_t GetFieldListEnable() const;

                    /**
                     * 设置是否允许远端获取现场设备列表（getGwList）
0：不允许
1：允许
                     * @param _fieldListEnable 是否允许远端获取现场设备列表（getGwList）
0：不允许
1：允许
                     * 
                     */
                    void SetFieldListEnable(const int64_t& _fieldListEnable);

                    /**
                     * 判断参数 FieldListEnable 是否已赋值
                     * @return FieldListEnable 是否已赋值
                     * 
                     */
                    bool FieldListEnableHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 安全模式  
0：关闭项目共享密钥 
1：开启项目共享密钥
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 项目密钥 32位 小写英文+数字；  项目密钥模式必填
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 自动注册方式
0：关闭自动注册
1：仅允许现场设备自动注册
2：仅允许远端设备自动注册
3：允许现场和远端设备均自动注册
                     */
                    int64_t m_autoRegister;
                    bool m_autoRegisterHasBeenSet;

                    /**
                     * 是否允许远端获取现场设备列表（getGwList）
0：不允许
1：允许
                     */
                    int64_t m_fieldListEnable;
                    bool m_fieldListEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTSECMODEREQUEST_H_
