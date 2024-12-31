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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_FLOWEXTRADETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_FLOWEXTRADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/FlowParamsDesc.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 流程额外信息
                */
                class FlowExtraDetail : public AbstractModel
                {
                public:
                    FlowExtraDetail();
                    ~FlowExtraDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取额外信息Title
                     * @return Title 额外信息Title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置额外信息Title
                     * @param _title 额外信息Title
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FlowParamsDesc> GetDetail() const;

                    /**
                     * 设置额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detail 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetail(const std::vector<FlowParamsDesc>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 额外信息Title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FlowParamsDesc> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_FLOWEXTRADETAIL_H_
