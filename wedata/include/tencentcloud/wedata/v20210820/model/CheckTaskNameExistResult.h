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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CheckTaskNameExistResult
                */
                class CheckTaskNameExistResult : public AbstractModel
                {
                public:
                    CheckTaskNameExistResult();
                    ~CheckTaskNameExistResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否已存在重名的任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IfExist 是否已存在重名的任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIfExist() const;

                    /**
                     * 设置是否已存在重名的任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ifExist 是否已存在重名的任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIfExist(const bool& _ifExist);

                    /**
                     * 判断参数 IfExist 是否已赋值
                     * @return IfExist 是否已赋值
                     * 
                     */
                    bool IfExistHasBeenSet() const;

                    /**
                     * 获取ifExist为true时的提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message ifExist为true时的提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置ifExist为true时的提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message ifExist为true时的提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 是否已存在重名的任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ifExist;
                    bool m_ifExistHasBeenSet;

                    /**
                     * ifExist为true时的提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTRESULT_H_
