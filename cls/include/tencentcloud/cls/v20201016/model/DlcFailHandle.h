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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILHANDLE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILHANDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcFailTableInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * dlc投递失败处理信息
                */
                class DlcFailHandle : public AbstractModel
                {
                public:
                    DlcFailHandle();
                    ~DlcFailHandle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否存储到DLC</p><p>默认值：false</p><p>用于控制是否开启投递失败的日志存储至DLC表</p>
                     * @return StoreToDlc <p>是否存储到DLC</p><p>默认值：false</p><p>用于控制是否开启投递失败的日志存储至DLC表</p>
                     * 
                     */
                    bool GetStoreToDlc() const;

                    /**
                     * 设置<p>是否存储到DLC</p><p>默认值：false</p><p>用于控制是否开启投递失败的日志存储至DLC表</p>
                     * @param _storeToDlc <p>是否存储到DLC</p><p>默认值：false</p><p>用于控制是否开启投递失败的日志存储至DLC表</p>
                     * 
                     */
                    void SetStoreToDlc(const bool& _storeToDlc);

                    /**
                     * 判断参数 StoreToDlc 是否已赋值
                     * @return StoreToDlc 是否已赋值
                     * 
                     */
                    bool StoreToDlcHasBeenSet() const;

                    /**
                     * 获取<p>DLC表信息</p>
                     * @return DlcFailTableInfo <p>DLC表信息</p>
                     * 
                     */
                    DlcFailTableInfo GetDlcFailTableInfo() const;

                    /**
                     * 设置<p>DLC表信息</p>
                     * @param _dlcFailTableInfo <p>DLC表信息</p>
                     * 
                     */
                    void SetDlcFailTableInfo(const DlcFailTableInfo& _dlcFailTableInfo);

                    /**
                     * 判断参数 DlcFailTableInfo 是否已赋值
                     * @return DlcFailTableInfo 是否已赋值
                     * 
                     */
                    bool DlcFailTableInfoHasBeenSet() const;

                private:

                    /**
                     * <p>是否存储到DLC</p><p>默认值：false</p><p>用于控制是否开启投递失败的日志存储至DLC表</p>
                     */
                    bool m_storeToDlc;
                    bool m_storeToDlcHasBeenSet;

                    /**
                     * <p>DLC表信息</p>
                     */
                    DlcFailTableInfo m_dlcFailTableInfo;
                    bool m_dlcFailTableInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILHANDLE_H_
