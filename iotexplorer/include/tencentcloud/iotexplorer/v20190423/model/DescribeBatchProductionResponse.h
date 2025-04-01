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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEBATCHPRODUCTIONRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEBATCHPRODUCTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeBatchProduction返回参数结构体
                */
                class DescribeBatchProductionResponse : public AbstractModel
                {
                public:
                    DescribeBatchProductionResponse();
                    ~DescribeBatchProductionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取量产数量。
                     * @return BatchCnt 量产数量。
                     * 
                     */
                    int64_t GetBatchCnt() const;

                    /**
                     * 判断参数 BatchCnt 是否已赋值
                     * @return BatchCnt 是否已赋值
                     * 
                     */
                    bool BatchCntHasBeenSet() const;

                    /**
                     * 获取烧录方式。
                     * @return BurnMethod 烧录方式。
                     * 
                     */
                    int64_t GetBurnMethod() const;

                    /**
                     * 判断参数 BurnMethod 是否已赋值
                     * @return BurnMethod 是否已赋值
                     * 
                     */
                    bool BurnMethodHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取下载URL。
                     * @return DownloadUrl 下载URL。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取生成方式。
                     * @return GenerationMethod 生成方式。
                     * 
                     */
                    int64_t GetGenerationMethod() const;

                    /**
                     * 判断参数 GenerationMethod 是否已赋值
                     * @return GenerationMethod 是否已赋值
                     * 
                     */
                    bool GenerationMethodHasBeenSet() const;

                    /**
                     * 获取上传URL。
                     * @return UploadUrl 上传URL。
                     * 
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     * 
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取成功数
                     * @return SuccessCount 成功数
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取量产最后失败原因
                     * @return LastFailedReason 量产最后失败原因
                     * 
                     */
                    std::string GetLastFailedReason() const;

                    /**
                     * 判断参数 LastFailedReason 是否已赋值
                     * @return LastFailedReason 是否已赋值
                     * 
                     */
                    bool LastFailedReasonHasBeenSet() const;

                    /**
                     * 获取量产状态  0：任务创建，未量产；1：处理中；2：量产结束上传结果中；3：任务完成
                     * @return Status 量产状态  0：任务创建，未量产；1：处理中；2：量产结束上传结果中；3：任务完成
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 量产数量。
                     */
                    int64_t m_batchCnt;
                    bool m_batchCntHasBeenSet;

                    /**
                     * 烧录方式。
                     */
                    int64_t m_burnMethod;
                    bool m_burnMethodHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 下载URL。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 生成方式。
                     */
                    int64_t m_generationMethod;
                    bool m_generationMethodHasBeenSet;

                    /**
                     * 上传URL。
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * 成功数
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 量产最后失败原因
                     */
                    std::string m_lastFailedReason;
                    bool m_lastFailedReasonHasBeenSet;

                    /**
                     * 量产状态  0：任务创建，未量产；1：处理中；2：量产结束上传结果中；3：任务完成
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEBATCHPRODUCTIONRESPONSE_H_
