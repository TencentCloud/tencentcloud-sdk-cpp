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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETVIEWRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETVIEWRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ViewInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 获取view详情的响应
                */
                class GetViewRsp : public AbstractModel
                {
                public:
                    GetViewRsp();
                    ~GetViewRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取view详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return View view详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ViewInfo GetView() const;

                    /**
                     * 设置view详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _view view详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetView(const ViewInfo& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                private:

                    /**
                     * view详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ViewInfo m_view;
                    bool m_viewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETVIEWRSP_H_
