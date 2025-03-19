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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_VIDEOCLOUDRECORDRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_VIDEOCLOUDRECORDRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/RecordInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 云录像接口结果
                */
                class VideoCloudRecordRes : public AbstractModel
                {
                public:
                    VideoCloudRecordRes();
                    ~VideoCloudRecordRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录像信息总数
                     * @return TotalCount 录像信息总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置录像信息总数
                     * @param _totalCount 录像信息总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取录像信息列表
                     * @return RecordSet 录像信息列表
                     * 
                     */
                    std::vector<RecordInfo> GetRecordSet() const;

                    /**
                     * 设置录像信息列表
                     * @param _recordSet 录像信息列表
                     * 
                     */
                    void SetRecordSet(const std::vector<RecordInfo>& _recordSet);

                    /**
                     * 判断参数 RecordSet 是否已赋值
                     * @return RecordSet 是否已赋值
                     * 
                     */
                    bool RecordSetHasBeenSet() const;

                private:

                    /**
                     * 录像信息总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 录像信息列表
                     */
                    std::vector<RecordInfo> m_recordSet;
                    bool m_recordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_VIDEOCLOUDRECORDRES_H_
