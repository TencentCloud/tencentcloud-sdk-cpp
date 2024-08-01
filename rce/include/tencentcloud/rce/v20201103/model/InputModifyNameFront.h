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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMODIFYNAMEFRONT_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMODIFYNAMEFRONT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 修改黑白名单入参
                */
                class InputModifyNameFront : public AbstractModel
                {
                public:
                    InputModifyNameFront();
                    ~InputModifyNameFront() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名单ID
                     * @return NameListId 名单ID
                     * 
                     */
                    int64_t GetNameListId() const;

                    /**
                     * 设置名单ID
                     * @param _nameListId 名单ID
                     * 
                     */
                    void SetNameListId(const int64_t& _nameListId);

                    /**
                     * 判断参数 NameListId 是否已赋值
                     * @return NameListId 是否已赋值
                     * 
                     */
                    bool NameListIdHasBeenSet() const;

                    /**
                     * 获取名单名称
                     * @return ListName 名单名称
                     * 
                     */
                    std::string GetListName() const;

                    /**
                     * 设置名单名称
                     * @param _listName 名单名称
                     * 
                     */
                    void SetListName(const std::string& _listName);

                    /**
                     * 判断参数 ListName 是否已赋值
                     * @return ListName 是否已赋值
                     * 
                     */
                    bool ListNameHasBeenSet() const;

                    /**
                     * 获取名单状态 [1 启用 2 停用]
                     * @return Status 名单状态 [1 启用 2 停用]
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置名单状态 [1 启用 2 停用]
                     * @param _status 名单状态 [1 启用 2 停用]
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Remark 描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
                     * @param _remark 描述
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 名单ID
                     */
                    int64_t m_nameListId;
                    bool m_nameListIdHasBeenSet;

                    /**
                     * 名单名称
                     */
                    std::string m_listName;
                    bool m_listNameHasBeenSet;

                    /**
                     * 名单状态 [1 启用 2 停用]
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMODIFYNAMEFRONT_H_
