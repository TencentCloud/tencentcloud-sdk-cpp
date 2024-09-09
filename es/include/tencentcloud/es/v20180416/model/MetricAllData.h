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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_METRICALLDATA_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_METRICALLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 全部指标数据
                */
                class MetricAllData : public AbstractModel
                {
                public:
                    MetricAllData();
                    ~MetricAllData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引流量
                     * @return IndexTraffic 索引流量
                     * 
                     */
                    double GetIndexTraffic() const;

                    /**
                     * 设置索引流量
                     * @param _indexTraffic 索引流量
                     * 
                     */
                    void SetIndexTraffic(const double& _indexTraffic);

                    /**
                     * 判断参数 IndexTraffic 是否已赋值
                     * @return IndexTraffic 是否已赋值
                     * 
                     */
                    bool IndexTrafficHasBeenSet() const;

                    /**
                     * 获取存储大小
                     * @return Storage 存储大小
                     * 
                     */
                    double GetStorage() const;

                    /**
                     * 设置存储大小
                     * @param _storage 存储大小
                     * 
                     */
                    void SetStorage(const double& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取读请求次数
                     * @return ReadReqTimes 读请求次数
                     * 
                     */
                    int64_t GetReadReqTimes() const;

                    /**
                     * 设置读请求次数
                     * @param _readReqTimes 读请求次数
                     * 
                     */
                    void SetReadReqTimes(const int64_t& _readReqTimes);

                    /**
                     * 判断参数 ReadReqTimes 是否已赋值
                     * @return ReadReqTimes 是否已赋值
                     * 
                     */
                    bool ReadReqTimesHasBeenSet() const;

                    /**
                     * 获取写请求次数
                     * @return WriteReqTimes 写请求次数
                     * 
                     */
                    int64_t GetWriteReqTimes() const;

                    /**
                     * 设置写请求次数
                     * @param _writeReqTimes 写请求次数
                     * 
                     */
                    void SetWriteReqTimes(const int64_t& _writeReqTimes);

                    /**
                     * 判断参数 WriteReqTimes 是否已赋值
                     * @return WriteReqTimes 是否已赋值
                     * 
                     */
                    bool WriteReqTimesHasBeenSet() const;

                    /**
                     * 获取文档数量
                     * @return DocCount 文档数量
                     * 
                     */
                    int64_t GetDocCount() const;

                    /**
                     * 设置文档数量
                     * @param _docCount 文档数量
                     * 
                     */
                    void SetDocCount(const int64_t& _docCount);

                    /**
                     * 判断参数 DocCount 是否已赋值
                     * @return DocCount 是否已赋值
                     * 
                     */
                    bool DocCountHasBeenSet() const;

                private:

                    /**
                     * 索引流量
                     */
                    double m_indexTraffic;
                    bool m_indexTrafficHasBeenSet;

                    /**
                     * 存储大小
                     */
                    double m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 读请求次数
                     */
                    int64_t m_readReqTimes;
                    bool m_readReqTimesHasBeenSet;

                    /**
                     * 写请求次数
                     */
                    int64_t m_writeReqTimes;
                    bool m_writeReqTimesHasBeenSet;

                    /**
                     * 文档数量
                     */
                    int64_t m_docCount;
                    bool m_docCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_METRICALLDATA_H_
