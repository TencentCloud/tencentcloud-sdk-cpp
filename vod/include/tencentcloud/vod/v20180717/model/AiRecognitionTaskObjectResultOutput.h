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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskObjectResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能物体识别输出。
                */
                class AiRecognitionTaskObjectResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskObjectResultOutput();
                    ~AiRecognitionTaskObjectResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能物体识别结果集。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ResultSetFileUrl 对应的文件中获取。
                     * @return ResultSet 智能物体识别结果集。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ResultSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<AiRecognitionTaskObjectResultItem> GetResultSet() const;

                    /**
                     * 设置智能物体识别结果集。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ResultSetFileUrl 对应的文件中获取。
                     * @param _resultSet 智能物体识别结果集。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ResultSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetResultSet(const std::vector<AiRecognitionTaskObjectResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取智能物体识别结果集文件 URL。文件的内容为 JSON，数据结构与 ResultSet 字段一致。 （文件不会永久存储，到达ResultSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return ResultSetFileUrl 智能物体识别结果集文件 URL。文件的内容为 JSON，数据结构与 ResultSet 字段一致。 （文件不会永久存储，到达ResultSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetResultSetFileUrl() const;

                    /**
                     * 设置智能物体识别结果集文件 URL。文件的内容为 JSON，数据结构与 ResultSet 字段一致。 （文件不会永久存储，到达ResultSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _resultSetFileUrl 智能物体识别结果集文件 URL。文件的内容为 JSON，数据结构与 ResultSet 字段一致。 （文件不会永久存储，到达ResultSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetResultSetFileUrl(const std::string& _resultSetFileUrl);

                    /**
                     * 判断参数 ResultSetFileUrl 是否已赋值
                     * @return ResultSetFileUrl 是否已赋值
                     * 
                     */
                    bool ResultSetFileUrlHasBeenSet() const;

                    /**
                     * 获取智能物体识别结果集文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return ResultSetFileUrlExpireTime 智能物体识别结果集文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetResultSetFileUrlExpireTime() const;

                    /**
                     * 设置智能物体识别结果集文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _resultSetFileUrlExpireTime 智能物体识别结果集文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetResultSetFileUrlExpireTime(const std::string& _resultSetFileUrlExpireTime);

                    /**
                     * 判断参数 ResultSetFileUrlExpireTime 是否已赋值
                     * @return ResultSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool ResultSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 智能物体识别结果集。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ResultSetFileUrl 对应的文件中获取。
                     */
                    std::vector<AiRecognitionTaskObjectResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * 智能物体识别结果集文件 URL。文件的内容为 JSON，数据结构与 ResultSet 字段一致。 （文件不会永久存储，到达ResultSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_resultSetFileUrl;
                    bool m_resultSetFileUrlHasBeenSet;

                    /**
                     * 智能物体识别结果集文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_resultSetFileUrlExpireTime;
                    bool m_resultSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTOUTPUT_H_
