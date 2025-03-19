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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSCONFIGURE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSCONFIGURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能字幕热词参数
                */
                class AsrHotWordsConfigure : public AbstractModel
                {
                public:
                    AsrHotWordsConfigure();
                    ~AsrHotWordsConfigure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取热词开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 热词开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置热词开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 热词开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取热词库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibraryId 热词库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置热词库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libraryId 热词库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                private:

                    /**
                     * 热词开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 热词库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSCONFIGURE_H_
