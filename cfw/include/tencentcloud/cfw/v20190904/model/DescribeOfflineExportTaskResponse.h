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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTASKRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/OfflineExportTask.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeOfflineExportTask返回参数结构体
                */
                class DescribeOfflineExportTaskResponse : public AbstractModel
                {
                public:
                    DescribeOfflineExportTaskResponse();
                    ~DescribeOfflineExportTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回状态码 0 成功 非0不成功</p>
                     * @return ReturnCode <p>返回状态码 0 成功 非0不成功</p>
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取<p>返回信息  success 成功 其他 不成功</p>
                     * @return ReturnMsg <p>返回信息  success 成功 其他 不成功</p>
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取<p>离线导出任务列表</p>
                     * @return Data <p>离线导出任务列表</p>
                     * 
                     */
                    std::vector<OfflineExportTask> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>任务数量</p>
                     * @return Total <p>任务数量</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>剩余导出文件配额，单位B</p>
                     * @return ExportRemainQuota <p>剩余导出文件配额，单位B</p>
                     * 
                     */
                    int64_t GetExportRemainQuota() const;

                    /**
                     * 判断参数 ExportRemainQuota 是否已赋值
                     * @return ExportRemainQuota 是否已赋值
                     * 
                     */
                    bool ExportRemainQuotaHasBeenSet() const;

                    /**
                     * 获取<p>导出文件配额，单位B</p>
                     * @return ExportQuota <p>导出文件配额，单位B</p>
                     * 
                     */
                    int64_t GetExportQuota() const;

                    /**
                     * 判断参数 ExportQuota 是否已赋值
                     * @return ExportQuota 是否已赋值
                     * 
                     */
                    bool ExportQuotaHasBeenSet() const;

                    /**
                     * 获取<p>导出数据限制</p>
                     * @return ExportLimit <p>导出数据限制</p>
                     * 
                     */
                    int64_t GetExportLimit() const;

                    /**
                     * 判断参数 ExportLimit 是否已赋值
                     * @return ExportLimit 是否已赋值
                     * 
                     */
                    bool ExportLimitHasBeenSet() const;

                private:

                    /**
                     * <p>返回状态码 0 成功 非0不成功</p>
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>返回信息  success 成功 其他 不成功</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * <p>离线导出任务列表</p>
                     */
                    std::vector<OfflineExportTask> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>任务数量</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>剩余导出文件配额，单位B</p>
                     */
                    int64_t m_exportRemainQuota;
                    bool m_exportRemainQuotaHasBeenSet;

                    /**
                     * <p>导出文件配额，单位B</p>
                     */
                    int64_t m_exportQuota;
                    bool m_exportQuotaHasBeenSet;

                    /**
                     * <p>导出数据限制</p>
                     */
                    int64_t m_exportLimit;
                    bool m_exportLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTASKRESPONSE_H_
