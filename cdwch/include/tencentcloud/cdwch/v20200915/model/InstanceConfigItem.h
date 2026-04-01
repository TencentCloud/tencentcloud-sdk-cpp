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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCECONFIGITEM_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCECONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * KV配置
                */
                class InstanceConfigItem : public AbstractModel
                {
                public:
                    InstanceConfigItem();
                    ~InstanceConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>key</p>
                     * @return ConfKey <p>key</p>
                     * 
                     */
                    std::string GetConfKey() const;

                    /**
                     * 设置<p>key</p>
                     * @param _confKey <p>key</p>
                     * 
                     */
                    void SetConfKey(const std::string& _confKey);

                    /**
                     * 判断参数 ConfKey 是否已赋值
                     * @return ConfKey 是否已赋值
                     * 
                     */
                    bool ConfKeyHasBeenSet() const;

                    /**
                     * 获取<p>value</p>
                     * @return ConfValue <p>value</p>
                     * 
                     */
                    std::string GetConfValue() const;

                    /**
                     * 设置<p>value</p>
                     * @param _confValue <p>value</p>
                     * 
                     */
                    void SetConfValue(const std::string& _confValue);

                    /**
                     * 判断参数 ConfValue 是否已赋值
                     * @return ConfValue 是否已赋值
                     * 
                     */
                    bool ConfValueHasBeenSet() const;

                    /**
                     * 获取<p>add/delete/update</p>
                     * @return ModifyType <p>add/delete/update</p>
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置<p>add/delete/update</p>
                     * @param _modifyType <p>add/delete/update</p>
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否需要重启</p>
                     * @return NeedRestart <p>是否需要重启</p>
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置<p>是否需要重启</p>
                     * @param _needRestart <p>是否需要重启</p>
                     * 
                     */
                    void SetNeedRestart(const bool& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取<p>修改前的值</p>
                     * @return OriginalConfValue <p>修改前的值</p>
                     * 
                     */
                    std::string GetOriginalConfValue() const;

                    /**
                     * 设置<p>修改前的值</p>
                     * @param _originalConfValue <p>修改前的值</p>
                     * 
                     */
                    void SetOriginalConfValue(const std::string& _originalConfValue);

                    /**
                     * 判断参数 OriginalConfValue 是否已赋值
                     * @return OriginalConfValue 是否已赋值
                     * 
                     */
                    bool OriginalConfValueHasBeenSet() const;

                private:

                    /**
                     * <p>key</p>
                     */
                    std::string m_confKey;
                    bool m_confKeyHasBeenSet;

                    /**
                     * <p>value</p>
                     */
                    std::string m_confValue;
                    bool m_confValueHasBeenSet;

                    /**
                     * <p>add/delete/update</p>
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * <p>是否需要重启</p>
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * <p>修改前的值</p>
                     */
                    std::string m_originalConfValue;
                    bool m_originalConfValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCECONFIGITEM_H_
