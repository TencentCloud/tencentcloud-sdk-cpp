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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDFILEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDFILEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/RecordTimeLine.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 用于查询设备云端录像时间轴信息返回数据
                */
                class DescribeRecordFileData : public AbstractModel
                {
                public:
                    DescribeRecordFileData();
                    ~DescribeRecordFileData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提示类型，0:时间段内无归档录像，1:时间段内有归档录像
                     * @return Tips 提示类型，0:时间段内无归档录像，1:时间段内有归档录像
                     * 
                     */
                    int64_t GetTips() const;

                    /**
                     * 设置提示类型，0:时间段内无归档录像，1:时间段内有归档录像
                     * @param _tips 提示类型，0:时间段内无归档录像，1:时间段内有归档录像
                     * 
                     */
                    void SetTips(const int64_t& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取存在为数组格式，不存在字段内容为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 存在为数组格式，不存在字段内容为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordTimeLine> GetList() const;

                    /**
                     * 设置存在为数组格式，不存在字段内容为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 存在为数组格式，不存在字段内容为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<RecordTimeLine>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 提示类型，0:时间段内无归档录像，1:时间段内有归档录像
                     */
                    int64_t m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 存在为数组格式，不存在字段内容为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordTimeLine> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDFILEDATA_H_
