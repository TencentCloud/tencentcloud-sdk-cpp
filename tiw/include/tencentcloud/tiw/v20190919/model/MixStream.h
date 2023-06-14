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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_MIXSTREAM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_MIXSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/CustomLayout.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 混流配置
                */
                class MixStream : public AbstractModel
                {
                public:
                    MixStream();
                    ~MixStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启混流
                     * @return Enabled 是否开启混流
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启混流
                     * @param _enabled 是否开启混流
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取是否禁用音频混流
                     * @return DisableAudio 是否禁用音频混流
                     * 
                     */
                    bool GetDisableAudio() const;

                    /**
                     * 设置是否禁用音频混流
                     * @param _disableAudio 是否禁用音频混流
                     * 
                     */
                    void SetDisableAudio(const bool& _disableAudio);

                    /**
                     * 判断参数 DisableAudio 是否已赋值
                     * @return DisableAudio 是否已赋值
                     * 
                     */
                    bool DisableAudioHasBeenSet() const;

                    /**
                     * 获取内置混流布局模板ID, 取值 [1, 2], 区别见内置混流布局模板样式示例说明
在没有填Custom字段时候，ModelId是必填的
                     * @return ModelId 内置混流布局模板ID, 取值 [1, 2], 区别见内置混流布局模板样式示例说明
在没有填Custom字段时候，ModelId是必填的
                     * 
                     */
                    int64_t GetModelId() const;

                    /**
                     * 设置内置混流布局模板ID, 取值 [1, 2], 区别见内置混流布局模板样式示例说明
在没有填Custom字段时候，ModelId是必填的
                     * @param _modelId 内置混流布局模板ID, 取值 [1, 2], 区别见内置混流布局模板样式示例说明
在没有填Custom字段时候，ModelId是必填的
                     * 
                     */
                    void SetModelId(const int64_t& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取老师用户ID
此字段只有在ModelId填了的情况下生效
填写TeacherId的效果是把指定为TeacherId的用户视频流显示在内置模板的第一个小画面中
                     * @return TeacherId 老师用户ID
此字段只有在ModelId填了的情况下生效
填写TeacherId的效果是把指定为TeacherId的用户视频流显示在内置模板的第一个小画面中
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置老师用户ID
此字段只有在ModelId填了的情况下生效
填写TeacherId的效果是把指定为TeacherId的用户视频流显示在内置模板的第一个小画面中
                     * @param _teacherId 老师用户ID
此字段只有在ModelId填了的情况下生效
填写TeacherId的效果是把指定为TeacherId的用户视频流显示在内置模板的第一个小画面中
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取自定义混流布局参数
当此字段存在时，ModelId 及 TeacherId 字段将被忽略
                     * @return Custom 自定义混流布局参数
当此字段存在时，ModelId 及 TeacherId 字段将被忽略
                     * 
                     */
                    CustomLayout GetCustom() const;

                    /**
                     * 设置自定义混流布局参数
当此字段存在时，ModelId 及 TeacherId 字段将被忽略
                     * @param _custom 自定义混流布局参数
当此字段存在时，ModelId 及 TeacherId 字段将被忽略
                     * 
                     */
                    void SetCustom(const CustomLayout& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                private:

                    /**
                     * 是否开启混流
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 是否禁用音频混流
                     */
                    bool m_disableAudio;
                    bool m_disableAudioHasBeenSet;

                    /**
                     * 内置混流布局模板ID, 取值 [1, 2], 区别见内置混流布局模板样式示例说明
在没有填Custom字段时候，ModelId是必填的
                     */
                    int64_t m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 老师用户ID
此字段只有在ModelId填了的情况下生效
填写TeacherId的效果是把指定为TeacherId的用户视频流显示在内置模板的第一个小画面中
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 自定义混流布局参数
当此字段存在时，ModelId 及 TeacherId 字段将被忽略
                     */
                    CustomLayout m_custom;
                    bool m_customHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_MIXSTREAM_H_
