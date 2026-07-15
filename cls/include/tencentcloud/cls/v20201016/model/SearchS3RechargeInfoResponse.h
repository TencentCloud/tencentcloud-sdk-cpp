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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHS3RECHARGEINFORESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHS3RECHARGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchS3RechargeInfo返回参数结构体
                */
                class SearchS3RechargeInfoResponse : public AbstractModel
                {
                public:
                    SearchS3RechargeInfoResponse();
                    ~SearchS3RechargeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>匹配到的存储桶下的某个文件的前几行数据</p>
                     * @return Data <p>匹配到的存储桶下的某个文件的前几行数据</p>
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>匹配到的存储桶下的文件个数</p>
                     * @return Sum <p>匹配到的存储桶下的文件个数</p>
                     * 
                     */
                    uint64_t GetSum() const;

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     * 
                     */
                    bool SumHasBeenSet() const;

                    /**
                     * 获取<p>当前预览文件路径</p>
                     * @return Path <p>当前预览文件路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>预览获取数据失败原因</p>
                     * @return Msg <p>预览获取数据失败原因</p>
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取<p>状态。</p><ul><li>0：成功</li><li>10000：参数错误，请确认参数</li><li>10001：授权失败，请确认授权</li><li>10002：获取文件列表失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li><li>10003：桶内无相应前缀文件，请使用正确的桶、文件前缀和压缩方式</li><li>10004：文件下载失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li><li>10005：文件解压缩失败，请选择正确的压缩方式然后再试</li><li>10006：读取文件内容失败，请确认文件可读</li><li>10007：文件预览失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li></ul>
                     * @return Status <p>状态。</p><ul><li>0：成功</li><li>10000：参数错误，请确认参数</li><li>10001：授权失败，请确认授权</li><li>10002：获取文件列表失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li><li>10003：桶内无相应前缀文件，请使用正确的桶、文件前缀和压缩方式</li><li>10004：文件下载失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li><li>10005：文件解压缩失败，请选择正确的压缩方式然后再试</li><li>10006：读取文件内容失败，请确认文件可读</li><li>10007：文件预览失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li></ul>
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
                     * <p>匹配到的存储桶下的某个文件的前几行数据</p>
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>匹配到的存储桶下的文件个数</p>
                     */
                    uint64_t m_sum;
                    bool m_sumHasBeenSet;

                    /**
                     * <p>当前预览文件路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>预览获取数据失败原因</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * <p>状态。</p><ul><li>0：成功</li><li>10000：参数错误，请确认参数</li><li>10001：授权失败，请确认授权</li><li>10002：获取文件列表失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li><li>10003：桶内无相应前缀文件，请使用正确的桶、文件前缀和压缩方式</li><li>10004：文件下载失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li><li>10005：文件解压缩失败，请选择正确的压缩方式然后再试</li><li>10006：读取文件内容失败，请确认文件可读</li><li>10007：文件预览失败，请稍后再试。若无法解决，请咨询 <a href="https://cloud.tencent.com/online-service">在线支持</a> 或 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=83&amp;level2_id=469&amp;source=14&amp;data_title=%E6%97%A5%E5%BF%97%E6%9C%8D%E5%8A%A1&amp;step=1">提交工单</a> 处理。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHS3RECHARGEINFORESPONSE_H_
