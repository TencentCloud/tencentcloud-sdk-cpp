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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_TASKDETAILDATA_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_TASKDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apcas/v20201127/model/LabelDetailData.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 画像任务详情对象
                */
                class TaskDetailData : public AbstractModel
                {
                public:
                    TaskDetailData();
                    ~TaskDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画像TAG ID
                     * @return TagId 画像TAG ID
                     */
                    uint64_t GetTagId() const;

                    /**
                     * 设置画像TAG ID
                     * @param TagId 画像TAG ID
                     */
                    void SetTagId(const uint64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取画像TAG描述（如“省份分布”）
                     * @return TagDesc 画像TAG描述（如“省份分布”）
                     */
                    std::string GetTagDesc() const;

                    /**
                     * 设置画像TAG描述（如“省份分布”）
                     * @param TagDesc 画像TAG描述（如“省份分布”）
                     */
                    void SetTagDesc(const std::string& _tagDesc);

                    /**
                     * 判断参数 TagDesc 是否已赋值
                     * @return TagDesc 是否已赋值
                     */
                    bool TagDescHasBeenSet() const;

                    /**
                     * 获取画像Label对象列表（一个TAG对于N个Label，例如“省份分布”TAG对应“广东省”、“浙江省”等多个Label）
                     * @return LabelDetailDataList 画像Label对象列表（一个TAG对于N个Label，例如“省份分布”TAG对应“广东省”、“浙江省”等多个Label）
                     */
                    std::vector<LabelDetailData> GetLabelDetailDataList() const;

                    /**
                     * 设置画像Label对象列表（一个TAG对于N个Label，例如“省份分布”TAG对应“广东省”、“浙江省”等多个Label）
                     * @param LabelDetailDataList 画像Label对象列表（一个TAG对于N个Label，例如“省份分布”TAG对应“广东省”、“浙江省”等多个Label）
                     */
                    void SetLabelDetailDataList(const std::vector<LabelDetailData>& _labelDetailDataList);

                    /**
                     * 判断参数 LabelDetailDataList 是否已赋值
                     * @return LabelDetailDataList 是否已赋值
                     */
                    bool LabelDetailDataListHasBeenSet() const;

                private:

                    /**
                     * 画像TAG ID
                     */
                    uint64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 画像TAG描述（如“省份分布”）
                     */
                    std::string m_tagDesc;
                    bool m_tagDescHasBeenSet;

                    /**
                     * 画像Label对象列表（一个TAG对于N个Label，例如“省份分布”TAG对应“广东省”、“浙江省”等多个Label）
                     */
                    std::vector<LabelDetailData> m_labelDetailDataList;
                    bool m_labelDetailDataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_TASKDETAILDATA_H_
