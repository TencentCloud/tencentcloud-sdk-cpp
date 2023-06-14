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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FRAMEINFO_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FRAMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 人员信息
                */
                class FrameInfo : public AbstractModel
                {
                public:
                    FrameInfo();
                    ~FrameInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取相似度
                     * @return Similarity 相似度
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置相似度
                     * @param _similarity 相似度
                     * 
                     */
                    void SetSimilarity(const double& _similarity);

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                    /**
                     * 获取截图的存储地址
                     * @return SnapshotUrl 截图的存储地址
                     * 
                     */
                    std::string GetSnapshotUrl() const;

                    /**
                     * 设置截图的存储地址
                     * @param _snapshotUrl 截图的存储地址
                     * 
                     */
                    void SetSnapshotUrl(const std::string& _snapshotUrl);

                    /**
                     * 判断参数 SnapshotUrl 是否已赋值
                     * @return SnapshotUrl 是否已赋值
                     * 
                     */
                    bool SnapshotUrlHasBeenSet() const;

                    /**
                     * 获取相对于视频起始时间的时间戳，单位秒
                     * @return Ts 相对于视频起始时间的时间戳，单位秒
                     * 
                     */
                    int64_t GetTs() const;

                    /**
                     * 设置相对于视频起始时间的时间戳，单位秒
                     * @param _ts 相对于视频起始时间的时间戳，单位秒
                     * 
                     */
                    void SetTs(const int64_t& _ts);

                    /**
                     * 判断参数 Ts 是否已赋值
                     * @return Ts 是否已赋值
                     * 
                     */
                    bool TsHasBeenSet() const;

                private:

                    /**
                     * 相似度
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * 截图的存储地址
                     */
                    std::string m_snapshotUrl;
                    bool m_snapshotUrlHasBeenSet;

                    /**
                     * 相对于视频起始时间的时间戳，单位秒
                     */
                    int64_t m_ts;
                    bool m_tsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FRAMEINFO_H_
