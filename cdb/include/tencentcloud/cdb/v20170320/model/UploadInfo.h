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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPLOADINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 文件上传描述
                */
                class UploadInfo : public AbstractModel
                {
                public:
                    UploadInfo();
                    ~UploadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件所有分片数
                     * @return AllSliceNum 文件所有分片数
                     * 
                     */
                    int64_t GetAllSliceNum() const;

                    /**
                     * 设置文件所有分片数
                     * @param _allSliceNum 文件所有分片数
                     * 
                     */
                    void SetAllSliceNum(const int64_t& _allSliceNum);

                    /**
                     * 判断参数 AllSliceNum 是否已赋值
                     * @return AllSliceNum 是否已赋值
                     * 
                     */
                    bool AllSliceNumHasBeenSet() const;

                    /**
                     * 获取已完成分片数
                     * @return CompleteNum 已完成分片数
                     * 
                     */
                    int64_t GetCompleteNum() const;

                    /**
                     * 设置已完成分片数
                     * @param _completeNum 已完成分片数
                     * 
                     */
                    void SetCompleteNum(const int64_t& _completeNum);

                    /**
                     * 判断参数 CompleteNum 是否已赋值
                     * @return CompleteNum 是否已赋值
                     * 
                     */
                    bool CompleteNumHasBeenSet() const;

                private:

                    /**
                     * 文件所有分片数
                     */
                    int64_t m_allSliceNum;
                    bool m_allSliceNumHasBeenSet;

                    /**
                     * 已完成分片数
                     */
                    int64_t m_completeNum;
                    bool m_completeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPLOADINFO_H_
