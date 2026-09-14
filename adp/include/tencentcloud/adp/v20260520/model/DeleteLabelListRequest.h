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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DELETELABELLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DELETELABELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DeleteLabelList请求参数结构体
                */
                class DeleteLabelListRequest : public AbstractModel
                {
                public:
                    DeleteLabelListRequest();
                    ~DeleteLabelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>待删除标签 ID 列表（数量：1~20）</p>
                     * @return LabelIdList <p>待删除标签 ID 列表（数量：1~20）</p>
                     * 
                     */
                    std::vector<std::string> GetLabelIdList() const;

                    /**
                     * 设置<p>待删除标签 ID 列表（数量：1~20）</p>
                     * @param _labelIdList <p>待删除标签 ID 列表（数量：1~20）</p>
                     * 
                     */
                    void SetLabelIdList(const std::vector<std::string>& _labelIdList);

                    /**
                     * 判断参数 LabelIdList 是否已赋值
                     * @return LabelIdList 是否已赋值
                     * 
                     */
                    bool LabelIdListHasBeenSet() const;

                private:

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>待删除标签 ID 列表（数量：1~20）</p>
                     */
                    std::vector<std::string> m_labelIdList;
                    bool m_labelIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DELETELABELLISTREQUEST_H_
